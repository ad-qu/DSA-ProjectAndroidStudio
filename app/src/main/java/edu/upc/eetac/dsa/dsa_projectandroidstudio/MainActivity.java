package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.media.Image;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ImageButton;
import android.widget.TextView;
import android.widget.Toast;

import com.google.android.material.snackbar.Snackbar;

import okhttp3.ResponseBody;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class MainActivity extends AppCompatActivity {

    int registerMode = 0;

    public void validateResponse(Response<ResponseBody> response){
        if(response.code() == 201){
            Log.i("SIGNUP","Login successfull");
            Toast.makeText(this, "Sign up successful", Toast.LENGTH_SHORT ).show();
        }
        else{
            Log.i("SIGNUP","Login unsuccessfull");
            Toast.makeText(this, "Sign up unsuccessful", Toast.LENGTH_SHORT ).show();
        }
    }

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

        go_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                //SE REGISTRA
                if(registerMode == 1) {
                    title_game.setVisibility(View.VISIBLE); email_text.setVisibility(View.INVISIBLE);
                    changeLogin_btn.setText("Don't have an account? Click here to register"); registerMode = 0;
                    try {
                        User u = new User(email_text.getText().toString(), user_text.getText().toString(), password_text.getText().toString());

                        Call<ResponseBody> call = MyApiAdapter.getApiService().signUp(email_text.getText().toString(), user_text.getText().toString(), password_text.getText().toString());

                        call.enqueue(new Callback<ResponseBody>() {
                            @Override
                            public void onResponse(Call<ResponseBody> call, Response<ResponseBody> response) {
                                validateResponse(response);
                                if(response.isSuccessful())
                                {
                                    Toast.makeText(getApplicationContext(), "Registrado correctamente", Toast.LENGTH_SHORT).show();
                                }
                            }

                            @Override
                            public void onFailure(Call<ResponseBody> call, Throwable t) {
                                Log.i("SIGNUP", "Failure: " + t.getMessage());
                            }
                        });
                    }
                    catch (Exception e)
                    {
                        Log.i("SIGNUP", "Exception: " + e.getMessage());
                    }
                }

                //INICIA SESIÓN
                else {
                    openMenuActivity();
                }
            }
        });

        changeLogin_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                if(registerMode == 0) {
                    title_game.setVisibility(View.INVISIBLE); email_text.setVisibility(View.VISIBLE);
                    changeLogin_btn.setText("Have an account? Click here to login"); registerMode = 1;
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