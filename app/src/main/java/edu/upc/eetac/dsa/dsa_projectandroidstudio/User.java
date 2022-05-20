package edu.upc.eetac.dsa.dsa_projectandroidstudio;

public class User {

    private String id;
    private String name;
    private String password;
    private String email;
    private Integer coins;

    public User(String id, String email, String name, String password, Integer coins) {

        this.id = id;
        this.email = email;
        this.name = name;
        this.password = password;
        this.coins = coins;
    }

    public String getId() {
        return id;
    }

    public void setId(String id){
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public Integer getCoins() {
        return coins;
    }

    public void setCoins(Integer coins) {
        this.coins = coins;
    }

    @Override
    public String toString() {
        return "User{" + "ID='" + this.id + '\'' +
                ", username='" + this.name + '\'' +
                ", password='" + this.password + '\'' +
                ", email='" + this.email + '\'' +
                '}';
    }
}
