package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentTransaction;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ImageButton;

public class MenuActivity extends AppCompatActivity {

    int fragmentSelector = 0;
    User userAccount;
    FragmentTransaction transaction;
    Fragment profile, shop, inventory, top, inicio;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_menu);
        profile = new Profile();
        shop = new Shop();
        inventory = new Inventario();
        top = new Ranking();
        inicio = new fragment_inicio();
        getSupportFragmentManager().beginTransaction().add(R.id.frameLayout, inicio).commit();

        String name = getIntent().getExtras().getString("name", "");
        String password = getIntent().getExtras().getString("pass", "");
        String id = getIntent().getExtras().getString("id", "");
        String email = getIntent().getExtras().getString("email", "");
        userAccount = new User(id, email, name, password, 0, 0);

        ImageButton back_btn = (ImageButton) findViewById(R.id.back_btn);
        ImageButton home_btn = (ImageButton) findViewById(R.id.home_btn);
        ImageButton profile_btn = (ImageButton) findViewById(R.id.profile_btn);
        ImageButton top_btn = (ImageButton) findViewById(R.id.top_btn);
        ImageButton inventory_btn = (ImageButton) findViewById(R.id.inventory_btn);
        ImageButton store_btn = (ImageButton) findViewById(R.id.store_btn);
        back_btn.bringToFront();
        home_btn.bringToFront();
        profile_btn.bringToFront();
        top_btn.bringToFront();
        inventory_btn.bringToFront();
        store_btn.bringToFront();

        Log.d("Error11", "Error11");

        back_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                finish();
            }
        });

        profile_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                transaction = getSupportFragmentManager().beginTransaction();
                transaction.replace(R.id.frameLayout, profile).commit();
            }
        });

        top_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                transaction = getSupportFragmentManager().beginTransaction();
                transaction.replace(R.id.frameLayout, top).commit();
            }
        });

        inventory_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                transaction = getSupportFragmentManager().beginTransaction();
                transaction.replace(R.id.frameLayout, inventory).commit();
            }
        });

        store_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                transaction = getSupportFragmentManager().beginTransaction();
                transaction.replace(R.id.frameLayout, shop).commit();
            }
        });
    }
}