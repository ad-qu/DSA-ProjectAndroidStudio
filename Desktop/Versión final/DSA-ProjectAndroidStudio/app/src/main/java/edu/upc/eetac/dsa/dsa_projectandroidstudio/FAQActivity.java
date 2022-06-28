package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import java.util.List;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class FAQActivity extends AppCompatActivity {
ApiServices services;
List<FAQ> lista;
RecyclerView rv1;
FAQActivity.AdapterDatos ai;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Log.d("Error1", "Error1");
        setContentView(R.layout.activity_faqactivity);
        services = ApiRetrofit.getApiService().create(ApiServices.class);
        rv1 = findViewById(R.id.recyclerviewFAQ2);
        Log.d("Error2", "Error2");
        try {
            Call<List<FAQ>> call = services.getAllFAQS();
            call.enqueue(new Callback<List<FAQ>>() {

                @Override
                public void onResponse(Call<List<FAQ>> call, Response<List<FAQ>> response) {
                    int variable = response.code();
                    lista = response.body();

                    LinearLayoutManager l = new LinearLayoutManager(getApplicationContext());
                    rv1.setLayoutManager(l);
                    ai = new FAQActivity.AdapterDatos();
                    rv1.setAdapter(ai);
                }

                @Override
                public void onFailure(Call<List<FAQ>> call, Throwable t) {
                    call.cancel();
                    Log.d("Error", "BOOM! Total failure!");
                }
            });
        } catch (Exception e) {
            Log.d("Error", "Exception: " + e.getMessage());
        }
    }

private class AdapterDatos  extends RecyclerView.Adapter<FAQActivity.AdapterDatos.ViewHoldeDatos> {

    @NonNull
    @Override
    public FAQActivity.AdapterDatos.ViewHoldeDatos onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        return new FAQActivity.AdapterDatos.ViewHoldeDatos(getLayoutInflater().inflate(R.layout.preguntas, parent, false));
    }

    @Override
    public void onBindViewHolder(@NonNull FAQActivity.AdapterDatos.ViewHoldeDatos holder, int position) {
        holder.asignarDatos(lista.get(position));
    }

    @Override
    public int getItemCount() {
        return lista.size();
    }

    public class ViewHoldeDatos extends RecyclerView.ViewHolder {
        TextView name;
        TextView description;

        public ViewHoldeDatos(@NonNull View itemView) {
            super(itemView);
            Log.d("Error2", "Error2");
            name = itemView.findViewById(R.id.textViewQuestion);
            description = itemView.findViewById(R.id.textViewRespuesta);
                /*
                price = itemView.findViewById(R.id.textView18);
                type = itemView.findViewById(R.id.textView19);
                damage = itemView.findViewById(R.id.textView20);
                dmgReduction = itemView.findViewById(R.id.textView21);

                 */
            Log.d("Error3", "Error3");

        }

        public void asignarDatos(FAQ faq) {
            name.setText(faq.getQuestion());
            description.setText(faq.getAns());
                /*
                price.setText(item.getPrice());
                type.setText(item.getType());
                damage.setText(item.getDamage());
                name.setText(item.getDmgReduction());
                 */
        }
    }
}
}