package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import java.util.List;

import retrofit2.Call;
import retrofit2.http.Body;
import retrofit2.http.GET;
import retrofit2.http.POST;
import retrofit2.http.Path;
import retrofit2.http.PUT;

public interface ApiServices {

    public static final String BASE_URL = "http://10.0.2.2:8080/dsaApp/";

    @GET("/dsaApp/user/pointRanking")
    Call<List<User>>getPointRanking();

    @POST("/dsaApp/user/logIn")
    Call<User>logIn(@Body LogInCredentials ref);

    @GET("/dsaApp/item/storeList")
    Call<List<Item>>getStoreList();

    @POST("/dsaApp/user/addUser")
    Call<User>signUp(@Body SignUpCredentials ref);

    @GET("/dsaApp/item/inventoryList/{username}")
    Call<List<Item>>getInventory(@Path("username") String username);

    @PUT("/dsaApp/item/buyItem/{itemname}/{username}")
    Call<Void>buyItem(@Path("itemname") String itemname, @Path("username") String username);
}

