package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.os.Bundle;

import androidx.fragment.app.Fragment;
import androidx.recyclerview.widget.DefaultItemAnimator;
import androidx.recyclerview.widget.ItemTouchHelper;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.List;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;


public class Shop extends Fragment {
private ArrayList<Item> itemList;
private RecyclerView recyclerView;
    ApiServices services;

    View view;
    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        view = inflater.inflate(R.layout.fragment_shop, container, false);
        itemList = new ArrayList<>();
        setAdapter();
        services = ApiRetrofit.getApiService().create(ApiServices.class);
        return view;
    }
    public void getAllItems(){
        try {
            Call<List<Item>> call = services.getAllItems();
            call.enqueue(new Callback<List<Item>>(){
                @Override
                public void onResponse(Call<List<Item>> call, Response<List<Item>> response) {
                    itemList = new ArrayList<>(response.body());
                }
                @Override
                public void onFailure(Call<List<Item>> call, Throwable t) {

                }
            });
        }
        catch (Exception e)
        {
            Log.d("", "Server no connection " + e.getMessage());
        }

    };
private void setAdapter(){
        Shopaddap adapter = new Shopaddap(itemList);
        RecyclerView.LayoutManager layoutManager = new LinearLayoutManager(getContext());
        recyclerView.setLayoutManager(layoutManager);
        recyclerView.setItemAnimator(new DefaultItemAnimator());
        recyclerView.setAdapter(adapter);
}

}