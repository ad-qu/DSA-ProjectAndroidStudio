package edu.upc.eetac.dsa.dsa_projectandroidstudio;

public class Question {
    private String date;
    private String title;
    private String message;
    private String sender;

    public Question() {}

    public Question(String date, String title, String message, String sender){
        this.date = date;
        this.title = title;
        this.message = message;
        this.sender = sender;
    }

    public String getDate() {
        return date;
    }

    public void setDate(String date) {
        this.date = date;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getMessage() {
        return message;
    }

    public void setMessage(String message) {
        this.message = message;
    }

    public String getSender() {
        return sender;
    }

    public void setSender(String sender) {
        this.sender = sender;
    }

    @Override
    public String toString() {
        return "Question{" +
                "date='" + date + '\'' +
                ", title='" + title + '\'' +
                ", message='" + message + '\'' +
                ", sender='" + sender + '\'' +
                '}';
    }
}