package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import java.util.List;

public class User {

    private String id;
    private String name;
    private String password;
    private String email;
    private Integer coins;
    private String language;
    private Integer points;
    private List<Item> inventory;

    public User(String id, String email, String name, String password, Integer coins, Integer points) {

        this.id = id;
        this.email = email;
        this.name = name;
        this.password = password;
        this.coins = coins;
        this.points = points;
    }

    public User(String email, String name, String password) {

        this.email = email;
        this.name = name;
        this.password = password;
    }

    public User() {}

    public String getId() {
        return id;
    }

    public int getPoints(){return points;}

    public void setPoints(Integer points) {this.points = points;}

    public void setId(String id){
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setLanguage(String language){
        this.language = language;
    }

    public String getLanguage(){
        return language;
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

    public List<Item> getInventory() { return inventory; }

    public void setInventory(List<Item> inventario) { this.inventory = inventario;}

    @Override
    public String toString() {
        return "User{" + "ID='" + this.id + '\'' +
                ", username='" + this.name + '\'' +
                ", password='" + this.password + '\'' +
                ", email='" + this.email + '\'' +
                '}';
    }

    public void addToInventory(Item item) {

        this.inventory.add(item);
    }
}
