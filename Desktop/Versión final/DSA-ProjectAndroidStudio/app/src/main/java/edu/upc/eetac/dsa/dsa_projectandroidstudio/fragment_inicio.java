package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;

import androidx.fragment.app.Fragment;

import java.util.List;

/**
 * A simple {@link Fragment} subclass.
 * Use the {@link fragment_inicio#newInstance} factory method to
 * create an instance of this fragment.
 */
public class fragment_inicio extends Fragment {
    View view;
    User userAccount;
    // TODO: Rename parameter arguments, choose names that match
    // the fragment initialization parameters, e.g. ARG_ITEM_NUMBER
    private static final String ARG_PARAM1 = "param1";
    private static final String ARG_PARAM2 = "param2";

    // TODO: Rename and change types of parameters
    private String mParam1;
    private String mParam2;

    public fragment_inicio() {
        // Required empty public constructor
    }

    /**
     * Use this factory method to create a new instance of
     * this fragment using the provided parameters.
     *
     * @param param1 Parameter 1.
     * @param param2 Parameter 2.
     * @return A new instance of fragment fragment_inicio.
     */
    // TODO: Rename and change types and number of parameters
    public static fragment_inicio newInstance(String param1, String param2) {
        fragment_inicio fragment = new fragment_inicio();
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
    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        // Inflate the layout for this fragment
        view = inflater.inflate(R.layout.fragment_inicio, container, false);
        MenuActivity activity = (MenuActivity) getActivity();
        userAccount = new User();
        userAccount = activity.getUser();
        Button Play = (Button) view.findViewById(R.id.play);
        Play.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                openJuegoActivity();
            }
        });

        return view;
    }

    private void openJuegoActivity(){
        Intent intent = new Intent(getActivity(), UnityHandlerActivity.class);
        MenuActivity activity = (MenuActivity) getActivity();
        List<Item> items = activity.getInventory();
        boolean weapon1 = false, weapon2 = false, shield = false;
        if(items.size() != 0) {
            for (int i = 0; i < items.size(); i++) {
                if (items.get(i).getName() == "Gun") {
                    weapon1 = true;
                }
                if (items.get(i).getName() == "Shield") {
                    shield = true;
                }
            }
        }
        String info = userAccount.getCoins().toString() + "/" + weapon1 + "/" + weapon2 + "/" + shield;
        intent.putExtra("arguments", info);
        startActivity(intent);
    }
}