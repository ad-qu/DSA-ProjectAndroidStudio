package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    User[] cache = new User[10];

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView login_txt = (TextView) findViewById(R.id.editTextTextPersonName);
        TextView register_txt = (TextView) findViewById(R.id.editTextTextPassword);

        Button login_btn = (Button) findViewById(R.id.login_btn);
        Button register_btn = (Button) findViewById(R.id.register_btn);
    }
}