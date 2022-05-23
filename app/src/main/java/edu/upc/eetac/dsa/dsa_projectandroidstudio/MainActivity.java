package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import androidx.appcompat.app.AppCompatActivity;
import android.content.Intent;
import android.os.Bundle;
import android.security.keystore.UserPresenceUnavailableException;
import android.util.Log;
import android.view.View;
import android.widget.ImageButton;
import android.widget.TextView;
import android.widget.Toast;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class MainActivity extends AppCompatActivity {

    int registerMode = 0;
    ApiServices services;
    User userAccount;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        ImageButton go_btn = (ImageButton) findViewById(R.id.imageButtonGo);
        TextView email_text = (TextView) findViewById(R.id.editTextEmail);
        TextView user_text = (TextView) findViewById(R.id.editTextUsername);
        TextView password_text = (TextView) findViewById(R.id.editTextPassword);
        TextView changeLogin_btn = (TextView) findViewById(R.id.textViewLogin);
        View title_game = (View) findViewById(R.id.logoMain);

        services = ApiRetrofit.getApiService().create(ApiServices.class);

        go_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                //REGISTERING A USER
                if(registerMode == 1) {

                    try {
                        SignUpCredentials ref = new SignUpCredentials(user_text.getText().toString(), email_text.getText().toString(), password_text.getText().toString());
                        Call<User> call = services.signUp(ref);
                        call.enqueue(new Callback<User>() {

                            @Override
                            public void onResponse(Call<User> call, Response<User> response) {

                                if(response.code() == 200) {
                                    Log.d("User", "Registration completed");
                                    Toast.makeText(getApplicationContext(),"Account successfully created", Toast.LENGTH_SHORT).show();

                                    title_game.setVisibility(View.VISIBLE); email_text.setVisibility(View.INVISIBLE);
                                    changeLogin_btn.setText("Don't have an account? Click here to register"); registerMode = 0;
                                }
                                else if(response.code() == 405) {
                                    Log.d("Error", "User or email already in use");
                                    Toast.makeText(getApplicationContext(),"Registration failed! Username or email already in use", Toast.LENGTH_SHORT).show();
                                }
                                else if(response.code() == 500) {
                                    Log.d("Error", "Validation error");
                                    Toast.makeText(getApplicationContext(),"Registration failed! Validation Error", Toast.LENGTH_SHORT).show();
                                }
                            }

                            @Override
                            public void onFailure(Call<User> call, Throwable t) {
                                call.cancel();
                                Log.d("Error", "BOOM! Total failure!");
                            }
                        });
                    }
                    catch (Exception e)
                    {
                        Log.d("Sign Up", "Exception: " + e.getMessage());
                    }
                }
                //LOGIN WITH AN ACCOUNT
                else {
                    LogInCredentials ref = new LogInCredentials(user_text.getText().toString(), password_text.getText().toString());
                    Call<User> call = services.logIn(ref);
                    call.enqueue(new Callback<User>() {

                        @Override
                        public void onResponse(Call<User> call, Response<User> response) {

                            if(response.code() == 200) {
                                userAccount = response.body();
                                Toast.makeText(getApplicationContext(),"Correct login!", Toast.LENGTH_SHORT).show();

                                openMenuActivity();
                            }
                            else if(response.code() == 404) {
                                Log.d("Error", "User not found");
                                Toast.makeText(getApplicationContext(),"Login failed! Make sure that everything is correct", Toast.LENGTH_SHORT).show();
                            }
                            else if(response.code() == 405) {
                                Log.d("Error", "Wrong password");
                                Toast.makeText(getApplicationContext(),"Login failed! Make sure that everything is correct", Toast.LENGTH_SHORT).show();
                            }
                            else if(response.code() == 500) {
                                Log.d("Error", "Invalid inputs");
                                Toast.makeText(getApplicationContext(),"Login failed! Make sure that everything is correct", Toast.LENGTH_SHORT).show();
                            }
                        }

                        @Override
                        public void onFailure(Call<User> call, Throwable t) {
                            call.cancel();
                            Log.d("Error", "BOOM! Total failure!");
                        }
                    });
                }
            }
        });

        changeLogin_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                if(registerMode == 0) {
                    title_game.setVisibility(View.INVISIBLE); email_text.setVisibility(View.VISIBLE);
                    changeLogin_btn.setText("Already have an account? Click here to login"); registerMode = 1;
                }
                else {
                    title_game.setVisibility(View.VISIBLE); email_text.setVisibility(View.INVISIBLE);
                    changeLogin_btn.setText("Don't have an account? Click here to register"); registerMode = 0;
                }
            }
        });
    }

    private void openMenuActivity() {

        Intent intent = new Intent(this, MenuActivity.class);
        startActivity(intent);
    }
}