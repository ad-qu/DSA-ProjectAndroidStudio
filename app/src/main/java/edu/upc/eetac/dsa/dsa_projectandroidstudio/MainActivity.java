package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.media.Image;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    int registerMode = 0;

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