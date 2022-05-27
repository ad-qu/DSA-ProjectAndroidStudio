package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;

import androidx.appcompat.app.AppCompatActivity;

public class FragmentInventory extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.fragment_inventory);
        ImageButton back_btn = (ImageButton) findViewById(R.id.back_i_btn);

        back_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                openMenuActivity();
            }
        });
    }

    private void openMenuActivity() {

        Intent intent = new Intent(this, MenuActivity.class);
        startActivity(intent);
    }
}