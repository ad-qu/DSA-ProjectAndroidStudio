package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import androidx.fragment.app.Fragment;

import java.util.ArrayList;

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
    static User userAccount;
    ApiServices services;

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
        if (getArguments() != null) {
            mParam1 = getArguments().getString(ARG_PARAM1);
            mParam2 = getArguments().getString(ARG_PARAM2);
        }
        try {
            Call<ArrayList<Item>> call = services.getInventory(userAccount.getName());
            call.enqueue(new Callback<ArrayList<Item>>() {

                @Override
                public void onResponse(Call<ArrayList<Item>> call, Response<ArrayList<Item>> response) {

                }

                @Override
                public void onFailure(Call<ArrayList<Item>> call, Throwable t) {
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
        return inflater.inflate(R.layout.fragment_inventario, container, false);
    }
}