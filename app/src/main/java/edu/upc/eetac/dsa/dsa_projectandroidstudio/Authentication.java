package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import edu.upc.eetac.dsa.dsa_projectandroidstudio.User;

import okhttp3.ResponseBody;
import retrofit2.Call;
import retrofit2.Response;
import retrofit2.http.Body;
import retrofit2.http.GET;
import retrofit2.http.POST;
import retrofit2.http.Path;

public interface Authentication {

    @POST("/logIn/{username}/{password}")
    Call<ResponseBody>login(@Body User u);

    @POST("/addUser/{username}/{password}/{email}")
    Call<ResponseBody>signUp(@Body User u);

    @GET("userInfo/{id}")
    Call<User> getUser(@Path("id") String id);
}

