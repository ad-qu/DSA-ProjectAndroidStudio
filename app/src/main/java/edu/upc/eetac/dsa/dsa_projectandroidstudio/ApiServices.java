package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import edu.upc.eetac.dsa.dsa_projectandroidstudio.User;

import retrofit2.Call;
import retrofit2.http.Body;
import retrofit2.http.POST;
import retrofit2.http.Path;

public interface ApiServices {

    @POST("/dsaApp/User/logIn/{username}/{password}")
    Call<User>logIn(@Body Referencias referencias);

    @POST("/dsaApp/User/addUser/{username}/{password}/{email}")
    Call<User>signUp(@Body Referencias referencias);
}

