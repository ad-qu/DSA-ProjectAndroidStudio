package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.fragment.app.Fragment;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import java.util.List;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

/**
 * A simple {@link Fragment} subclass.
 * Use the {@link Inventario#newInstance} factory method to
 * create an instance of this fragment.
 */
public class Inventario extends Fragment {

    // TODO: Rename parameter arguments, choose names that match
    // the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
    private static final String ARG_PARAM1 = "param1";
    private static final String ARG_PARAM2 = "param2";

    // TODO: Rename and change types of parameters
    private String mParam1;
    private String mParam2;
    User userAccount;
    List<Item> items;
    ApiServices services;
    RecyclerView rv1;
    View view;
    AdapterDatos ai;


    public Inventario() {
        // Required empty public constructor
    }

    /**
     * Use this factory method to create a new instance of
     * this fragment using the provided parameters.
     *
     * @param param1 Parameter 1.
     * @param param2 Parameter 2.
     * @return A new instance of fragment Inventario.
     */
    // TODO: Rename and change types and number of parameters
    public static Inventario newInstance(String param1, String param2) {
        Inventario fragment = new Inventario();
        Bundle args = new Bundle();
        args.putString(ARG_PARAM1, param1);
        args.putString(ARG_PARAM2, param2);
        fragment.setArguments(args);
        return fragment;
    }

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        services = ApiRetrofit.getApiService().create(ApiServices.class);
        if (getArguments() != null) {
            mParam1 = getArguments().getString(ARG_PARAM1);
            mParam2 = getArguments().getString(ARG_PARAM2);
        }
        try {
            Log.d("A", "A");
            MenuActivity activity = (MenuActivity) getActivity();
            userAccount = new User();
            userAccount = activity.getUser();
            Log.d("AA", "AA " + userAccount.getName());
            Call<List<Item>> call = services.getInventory(userAccount.getName());
            call.enqueue(new Callback<List<Item>>() {

                @Override
                public void onResponse(Call<List<Item>> call, Response<List<Item>> response) {
                    Log.d("AAA", "AAA " + response.body().toString());
                    items.addAll(response.body());
                    Log.d("LO QUE ME LLEGA", response.body().toString());
                    LinearLayoutManager l = new LinearLayoutManager(view.getContext());
                    rv1.setLayoutManager(l);
                    ai = new AdapterDatos();
                    rv1.setAdapter(ai);
                }

                @Override
                public void onFailure(Call<List<Item>> call, Throwable t) {
                    call.cancel();
                    Log.d("Error", "BOOM! Total failure!");
                }
            });
            }
        catch (Exception e)
        {
            Log.d("Error", "Exception: " + e.getMessage());
        }
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        // Inflate the layout for this fragment
            view = inflater.inflate(R.layout.fragment_inventario, container, false);
            rv1 = view.findViewById(R.id.recyclerview);
            return view;
    }

    private class AdapterDatos  extends RecyclerView.Adapter<AdapterDatos.ViewHoldeDatos> {

        @NonNull
        @Override
        public AdapterDatos.ViewHoldeDatos onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
            return new AdapterDatos.ViewHoldeDatos(getLayoutInflater().inflate(R.layout.item, parent, false));
        }

        @Override
        public void onBindViewHolder(@NonNull AdapterDatos.ViewHoldeDatos holder, int position) {
            holder.asignarDatos(items.get(position));
        }

        @Override
        public int getItemCount() {
            return items.size();
        }

        public class ViewHoldeDatos extends RecyclerView.ViewHolder {
            TextView name;
            TextView description;
            /*
            TextView price;
            TextView type;
            TextView damage;
            TextView dmgReduction;
             */
            public ViewHoldeDatos(@NonNull View itemView) {
                super(itemView);
                Log.d("Error2", "Error2");
                name = itemView.findViewById(R.id.textView17);
                description = itemView.findViewById(R.id.textView18);
                /*
                price = itemView.findViewById(R.id.textView18);
                type = itemView.findViewById(R.id.textView19);
                damage = itemView.findViewById(R.id.textView20);
                dmgReduction = itemView.findViewById(R.id.textView21);

                 */
                Log.d("Error3", "Error3");

            }

            public void asignarDatos(Item item) {
                name.setText(item.getName());
                description.setText(item.getDescription());
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