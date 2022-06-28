package edu.upc.eetac.dsa.dsa_projectandroidstudio;

public class SignUpCredentials {

    private String email;
    private String username;
    private String password;

    public SignUpCredentials(String username, String email, String password) {

        this.email = email;
        this.username = username;
        this.password = password;
    }

    public SignUpCredentials() {}
}
