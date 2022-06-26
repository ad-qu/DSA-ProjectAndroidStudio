package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import java.util.List;

import retrofit2.Call;
import retrofit2.http.Body;
import retrofit2.http.GET;
import retrofit2.http.POST;
import retrofit2.http.Path;

public interface ApiServices {

    @POST("/dsaApp/user/logIn")
    Call<User>logIn(@Body LogInCredentials ref);

    @GET("/dsaApp/item/storeList")
    Call<List<Item>> getAllItems();

    @POST("/dsaApp/user/addUser")
    Call<User>signUp(@Body SignUpCredentials ref);

    @GET("/dsaApp/item/inventoryList/{username}")
    Call<List<Item>> getInventory(@Path("username") String username);
}

