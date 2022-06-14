package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;
import androidx.fragment.app.FragmentTransaction;

import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;

public class MenuActivity extends AppCompatActivity {

    int fragmentSelector = 0;
    User userAccount;

    public void setUserAccount(User user) {
        userAccount = user;
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_menu);

        ImageButton back_btn = (ImageButton) findViewById(R.id.back_btn);
        ImageButton home_btn = (ImageButton) findViewById(R.id.home_btn);
        ImageButton profile_btn = (ImageButton) findViewById(R.id.profile_btn);
        ImageButton top_btn = (ImageButton) findViewById(R.id.top_btn);
        ImageButton inventory_btn = (ImageButton) findViewById(R.id.inventory_btn);
        ImageButton store_btn = (ImageButton) findViewById(R.id.store_btn);

        back_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                finish();
            }
        });

        profile_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                fragmentSelector = 2;
            }
        });

        top_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                fragmentSelector = 3;
            }
        });

        inventory_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                fragmentSelector = 4;
            }
        });

        store_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                fragmentSelector = 5;
            }
        });
    }

    private void openActivity() {
        FragmentManager fragmentManager = getSupportFragmentManager();
        Fragment fragment = (Fragment) fragmentManager.findFragmentById(R.id.frameLayout);
        FragmentTransaction fragmentTransaction = fragmentManager.beginTransaction();

        if (fragmentSelector == 1) {

        }

        else if(fragmentSelector == 2) {
            fragmentManager.beginTransaction().add(R.id.frameLayout, fragment , Profile.class.getName()).commit();
        }

        else if(fragmentSelector == 3) {
            fragmentManager.beginTransaction().add(R.id.frameLayout, fragment, Ranking.class.getName()).commit();
        }
        else if(fragmentSelector == 4) {
            fragmentManager.beginTransaction().add(R.id.frameLayout, fragment, Inventario.class.getName()).commit();
            if (fragmentTransaction.getClass().getName().equals(Inventario.class.getName()) == true) {
                Inventario.userAccount = userAccount;


            }
        }

        else if(fragmentSelector == 5) {
            fragmentManager.beginTransaction().add(R.id.frameLayout, fragment, Shop.class.getName()).commit();
        }
    }
}