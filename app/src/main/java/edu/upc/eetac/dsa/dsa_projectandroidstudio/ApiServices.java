package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import edu.upc.eetac.dsa.dsa_projectandroidstudio.User;

import retrofit2.Call;
import retrofit2.http.Body;
import retrofit2.http.POST;
import retrofit2.http.Path;

public interface ApiServices {

    @POST("/dsaApp/user/logIn")
    Call<User>logIn(@Body LogInCredentials ref);

    @POST("/dsaApp/user/addUser")
    Call<User>signUp(@Body SignUpCredentials ref);
}

