package edu.upc.eetac.dsa.dsa_projectandroidstudio;

public class Game {
    private String id;
    private String userId;
    private boolean finished;
    private int points;
    private int coins;

    public Game() {}

    public Game(String userId, int coins) {
        this.userId = userId;
        this.finished = false;
        this.points = 0;
        this.coins = coins;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getUserId() {
        return userId;
    }

    public void setUserId(String userId) {
        this.userId = userId;
    }

    public boolean isFinished() {
        return finished;
    }

    public void setFinished(boolean finished) {
        this.finished = finished;
    }

    public int getPoints() {
        return points;
    }

    public void setPoints(int points) {
        this.points = points;
    }

    public int getCoins() {
        return coins;
    }

    public void setCoins(int coins) {
        this.coins = coins;
    }

    @Override
    public String toString() {
        return "Game{" +
                "id='" + id + '\'' +
                ", userId='" + userId + '\'' +
                ", finished=" + finished +
                ", points=" + points +
                ", coins=" + coins +
                '}';
    }
}