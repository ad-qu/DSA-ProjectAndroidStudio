package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageButton;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import okhttp3.ResponseBody;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class SingUpActivity extends AppCompatActivity{

    private Button done;
    private EditText name;
    private EditText surname;
    private EditText idUser;
    private EditText age;
    private EditText password;
    private EditText passwordConf;

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

    public void errorPasswords(){
        Toast.makeText(this, "The passwords are differents", Toast.LENGTH_SHORT ).show();
    }

    public void openMainActivity() {
        Intent intent = new Intent(this, MainActivity.class);
        startActivity(intent);
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

        go_btn.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View v) {
                try {
                        User u = new User(email_text.getText().toString(), user_text.getText().toString(), password_text.getText().toString());

                        Call<ResponseBody> call = MyApiAdapter.getApiService().signUp(u);

                        call.enqueue(new Callback<ResponseBody>() {
                            @Override
                            public void onResponse(Call<ResponseBody> call, Response<ResponseBody> response) {
                                validateResponse(response);
                                if(response.isSuccessful())
                                {
                                    openMainActivity();
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
        });

    }

}
