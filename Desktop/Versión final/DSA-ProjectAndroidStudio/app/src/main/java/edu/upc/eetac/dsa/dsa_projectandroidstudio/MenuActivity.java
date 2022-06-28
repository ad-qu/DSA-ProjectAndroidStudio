package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.ImageButton;

import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentTransaction;

import java.util.List;
import java.util.Locale;

public class MenuActivity extends AppCompatActivity {

    int fragmentSelector = 0;
    public User userAccount;
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
        int coins = getIntent().getExtras().getInt("coins");
        int points = getIntent().getExtras().getInt("points");
        userAccount = new User(id, email, name, password, coins, points);
        userAccount.setLanguage(Locale.getDefault().getLanguage());

        ImageButton faq_btn = (ImageButton) findViewById(R.id.faq_btn);
        ImageButton question_btn = (ImageButton) findViewById(R.id.question_btn);
        ImageButton warning_btn = (ImageButton) findViewById(R.id.issue_btn);

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

        faq_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                openFAQActivity();
            }
        });

        question_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                openQuestionActivity();
            }
        });

        warning_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                openDenunciaActivity();
            }
        });

        home_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v){
                transaction = getSupportFragmentManager().beginTransaction();
                transaction.replace(R.id.frameLayout, inicio).commit();
            }
        });

        profile_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                transaction = getSupportFragmentManager().beginTransaction();
                transaction.replace(R.id.frameLayout, profile).commit();
                Log.d("Error11", "Error11");
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

    private void openFAQActivity(){
        Intent intent = new Intent(getApplicationContext(), FAQActivity.class);
        startActivity(intent);
    }

    public void setInventory(List<Item> inventario){
        userAccount.setInventory(inventario);
    }

    public List<Item> getInventory(){
        return userAccount.getInventory();
    }

    private void openQuestionActivity(){
        Intent intent = new Intent(getApplicationContext(), QuestionActivity.class);
        startActivity(intent);
    }

    private void openDenunciaActivity(){
        Intent intent = new Intent(getApplicationContext(), DenunciarActivity.class);
        startActivity(intent);
    }

    public User getUser(){
        return userAccount;
    }
}