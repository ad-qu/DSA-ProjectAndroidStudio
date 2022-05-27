package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;

public class MenuActivity extends AppCompatActivity {

    int fragmentSelector = 0;

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

                fragmentSelector = 1;
                openActivity();
            }
        });

        profile_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                openActivity();
            }
        });

        top_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                fragmentSelector = 3;
                openActivity();
            }
        });

        inventory_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                fragmentSelector = 4;
                openActivity();
            }
        });

        store_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                fragmentSelector = 5;
                openActivity();
            }
        });
    }

    private void openActivity() {

        Intent intent = new Intent(this, FragmentProfile.class);
        startActivity(intent);

        /*if (fragmentSelector == 1) {
            Intent intent = new Intent(this, MainActivity.class);
            startActivity(intent);
        }

        else if(fragmentSelector == 2) {
            Intent intent = new Intent(this, FragmentProfile.class);
            startActivity(intent);
        }

        else if(fragmentSelector == 3) {
            Intent intent = new Intent(this, FragmentTop.class);
            startActivity(intent);
        }

        else if(fragmentSelector == 4) {
            Intent intent = new Intent(this, FragmentInventory.class);
            startActivity(intent);
        }

        else if(fragmentSelector == 5) {
            Intent intent = new Intent(this, FragmentStore.class);
            startActivity(intent);
        }*/
    }
}