package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.os.Bundle;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.fragment.app.Fragment;

/**
 * A simple {@link Fragment} subclass.
 * Use the {@link Profile#newInstance} factory method to
 * create an instance of this fragment.
 */
public class Profile extends Fragment {

    String nombre, email, id, language;
    int points, coins;
    User user;
    // TODO: Rename parameter arguments, choose names that match
    // the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
    private static final String ARG_PARAM1 = "param1";
    private static final String ARG_PARAM2 = "param2";

    // TODO: Rename and change types of parameters
    private String mParam1;
    private String mParam2;

    public Profile() {
        // Required empty public constructor
    }

    /**
     * Use this factory method to create a new instance of
     * this fragment using the provided parameters.
     *
     * @param param1 Parameter 1.
     * @param param2 Parameter 2.
     * @return A new instance of fragment ProfileFragment.
     */
    // TODO: Rename and change types and number of parameters
    public static Profile newInstance(String param1, String param2) {
        Profile fragment = new Profile();
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
        Log.d("Error12", "Error12");
        MenuActivity activity = (MenuActivity) getActivity();
        user = activity.getUser();
        View view = inflater.inflate(R.layout.fragment_profile, container, false);

        Log.d("Error13", "Error13");
        Log.d("Error14", user.getName() + " " + user.getEmail() + " " + user.getId() + " " + user.getCoins() + " " + user.getPoints() + " " + user.getLanguage());

        /*
        setName(user.getName());
        setEmail(user.getEmail());
        setId(user.getId());
        setCoins(String.valueOf(user.getCoins()));
        setPoints(String.valueOf(user.getPoints()));
        setLanguage(user.getLanguage());
         */

        TextView textView1 = (TextView) view.findViewById(R.id.textView3);
        textView1.setText(user.getName());
        TextView textView2 = (TextView) view.findViewById(R.id.textView5);
        textView2.setText(user.getEmail());
        TextView textView3 = (TextView) view.findViewById(R.id.textView13);
        textView3.setText(user.getId());
        TextView textView4 = (TextView) view.findViewById(R.id.textView8);
        textView4.setText(String.valueOf(user.getCoins()));
        TextView textView5 = (TextView) view.findViewById(R.id.textView10);
        textView5.setText(String.valueOf(user.getPoints()));
        TextView textView6 = (TextView) view.findViewById(R.id.textView12);
        textView6.setText(user.getLanguage());
        return view;
    }
}