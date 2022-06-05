package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;


import java.util.ArrayList;
import java.util.List;

import edu.upc.eetac.dsa.dsa_projectandroidstudio.FAQ;

public class list_element extends RecyclerView.Adapter<list_element.ViewHolder> {
    private ArrayList<FAQ> elementList;

    public static class ViewHolder extends RecyclerView.ViewHolder {
        // each data item is just a string in our viewHolder
        public TextView Question;
        public TextView Ans;
        public View layout;

        public ViewHolder(View itemView) {
            super(itemView);
            layout = itemView;
            Question = itemView.findViewById(R.id.Question);
            Ans = itemView.findViewById(R.id.Ans);
        }
    }
    @NonNull
    @Override
    public ViewHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        // create a new view
        LayoutInflater inflater = LayoutInflater.from( parent.getContext());
        View v = inflater.inflate(R.layout.list_element, parent, false);
        // set the view's size, margins, padding and layout parameters
        ViewHolder vh = new ViewHolder(v);
        return vh;
    }
    public void setData(ArrayList<FAQ> myDataSet){
        elementList=myDataSet;
        notifyDataSetChanged();
    }
    @Override
    public void onBindViewHolder(@NonNull list_element.ViewHolder holder, int position) {
        holder.Question.setText(elementList.get(position).getQuestion());
        holder.Ans.setText(elementList.get(position).getAns());

    }

    @Override
    public int getItemCount() {
        return elementList.size();
    }
}