package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import java.util.ArrayList;
import java.util.List;

public class Shopaddap extends RecyclerView.Adapter<Shopaddap.MyViewHolder> {
    private ArrayList<Item> ItemList;
    public  Shopaddap(ArrayList<Item> ItemList){
        this.ItemList = ItemList;
    }

    public class MyViewHolder extends RecyclerView.ViewHolder{
        private TextView nameTxt;
        private TextView descriptionTxt;
        private TextView priceTxt;
        private TextView typeTxt;
        private TextView dmgTxt;
        private TextView defTxt;

        public MyViewHolder(final View view){
            super(view);
            nameTxt = view.findViewById(R.id.textViewname);
            descriptionTxt = view.findViewById(R.id.textViewdescr);
            priceTxt = view.findViewById(R.id.textViewprice);
            typeTxt = view.findViewById(R.id.textViewtype);
            dmgTxt = view.findViewById(R.id.textViewdmg);
            defTxt = view.findViewById(R.id.textViewDef);
        }
    }
    @NonNull
    @Override
    public Shopaddap.MyViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
       View ItemView = LayoutInflater.from(parent.getContext()).inflate(R.layout.list_element_shop, parent, false);
       return new MyViewHolder(ItemView);
    }

    @Override
    public void onBindViewHolder(@NonNull Shopaddap.MyViewHolder holder, int position) {
        String name = ItemList.get(position).getName();
        String description = ItemList.get(position).getDescription();
        String price = String.valueOf(ItemList.get(position).getPrice());
        String type = ItemList.get(position).getType();
        String dmg = String.valueOf(ItemList.get(position).getDamage());
        String def = String.valueOf(ItemList.get(position).getDmgReduction());
        holder.nameTxt.setText(name);
        holder.descriptionTxt.setText(description);
        holder.priceTxt.setText(price);
        holder.typeTxt.setText(type);
        holder.dmgTxt.setText(dmg);
        holder.defTxt.setText(def);
    }


    @Override
    public int getItemCount() {
        return ItemList.size();
    }
}
