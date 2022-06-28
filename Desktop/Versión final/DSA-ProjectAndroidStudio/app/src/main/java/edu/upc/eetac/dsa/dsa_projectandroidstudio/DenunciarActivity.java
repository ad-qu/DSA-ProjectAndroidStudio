package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

//CLASSE AFEGIDA PEL MINIM2 IRENE GORDUN

public class DenunciarActivity extends AppCompatActivity {
    ApiServices services;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_denunciar);

        services = ApiRetrofit.getApiService().create(ApiServices.class);

        //atributs enunciat
        EditText date;
        EditText informer;
        EditText message;

        //elements del layout
        date = findViewById(R.id.DateText);
        informer = findViewById(R.id.InformerText);
        message = findViewById(R.id.MessageText);

        Button enviar = (Button) findViewById(R.id.send_btn);

        //apreta botó enviar
        enviar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String dateString = date.getText().toString();
                String informerString = informer.getText().toString();
                String messageString = message.getText().toString();

                //per guardar nom per futures denuncies
                SharedPreferences sharedPreferences = getSharedPreferences("userName", Context.MODE_PRIVATE);
                SharedPreferences.Editor editor = sharedPreferences.edit();
                editor.putString("User", informerString);
                editor.commit();

                Denuncia ref = new Denuncia (dateString, informerString, messageString);
                Call<Denuncia> call = services.denuncia(ref);
                //services.denuncia(new Denuncia(date, informer, message));

                call.enqueue(new Callback<Denuncia>() {
                    @Override
                    public void onResponse(Call<Denuncia> call, Response<Denuncia> response) {
                        Log.i("Denuncia d'abus:" ,""+ ref.toString());
                        if (response.isSuccessful()) {
                            Log.d("Denuncia", "Denuncia completada");
                            Toast.makeText(getApplicationContext(), "Denuncia creada amb exit", Toast.LENGTH_SHORT).show();
                            Intent intent = new Intent(getApplicationContext(), DoneActivity.class);
                        }
                    }

                    @Override
                    public void onFailure(Call<Denuncia> call, Throwable t) {
                        Log.d("Denuncia", "Denuncia sense exit");
                        Toast.makeText(getApplicationContext(), "Denuncia sense exit", Toast.LENGTH_SHORT).show();
                        Intent intent = new Intent(getApplicationContext(), ErrorActivity.class);
                    }
                });

            }
        });
    }
}