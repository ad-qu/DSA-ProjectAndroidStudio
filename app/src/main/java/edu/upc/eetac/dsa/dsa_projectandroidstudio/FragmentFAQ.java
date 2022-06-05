package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageButton;
import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import android.os.Bundle;
import android.security.keystore.UserPresenceUnavailableException;
import android.widget.TextView;
import android.widget.Toast;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;
import retrofit2.Retrofit;

import androidx.appcompat.app.AppCompatActivity;

import java.util.ArrayList;
import java.util.List;

public class FragmentFAQ extends AppCompatActivity {
private RecyclerView recyclerView;
    ApiServices services;
    private static Retrofit retrofit;
    private list_element lelement;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.fragment_faq);
        recyclerView = findViewById(R.id.recyclerView);
        recyclerView.setLayoutManager(new LinearLayoutManager(this));
        lelement = new list_element(this, );
        lelement.setClickListener(this);
        recyclerView.setAdapter(lelement);
       try{
          getFAQ();
        }
       catch (Exception e) {
           e.printStackTrace();
       };

        ImageButton back_btn = (ImageButton) findViewById(R.id.back_p_btn6);

        back_btn.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View v) {

                openMenuActivity();
            }
        });

    }
    public void getFAQ(){
        try {
            Call<ArrayList<FAQ>> call = services.getPreguntas();
            call.enqueue(new Callback<ArrayList<FAQ>>(){
                @Override
                public void onResponse(Call<ArrayList<FAQ>> call, Response<ArrayList<FAQ>> response) {
                    call.toString();
                    lelement.setData((ArrayList<FAQ>) response.body());

                }
                @Override
                public void onFailure(Call<ArrayList<FAQ>> call, Throwable t) {
                    Toast toast = Toast.makeText(FragmentFAQ.this, "No se han podido cargar las preguntas y respuestas", Toast.LENGTH_SHORT);
                    toast.show();
                }
            });
        }
        catch (Exception e)
        {
            Toast toast = Toast.makeText(FragmentFAQ.this, "No se ha podido conectar con el servidor", Toast.LENGTH_SHORT);
            toast.show();
        }

    };
    private void openMenuActivity() {

        Intent intent = new Intent(this, MenuActivity.class);
        startActivity(intent);
    }
}