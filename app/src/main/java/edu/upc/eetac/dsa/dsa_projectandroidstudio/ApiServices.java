package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.net.wifi.hotspot2.pps.Credential;

import java.util.ArrayList;
import java.util.List;

import edu.upc.eetac.dsa.dsa_projectandroidstudio.User;
import edu.upc.eetac.dsa.dsa_projectandroidstudio.Item;
import retrofit2.Call;
import retrofit2.http.Body;
import retrofit2.http.GET;
import retrofit2.http.POST;
import retrofit2.http.Path;

public interface ApiServices {

    @POST("/dsaApp/user/logIn")
    Call<User>logIn(@Body LogInCredentials ref);

    @GET("/item/storeList")
    Call<List<Item>> getAllItems();

    @POST("/dsaApp/user/addUser")
    Call<User>signUp(@Body SignUpCredentials ref);
}

