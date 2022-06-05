package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import java.util.LinkedList;

public class FAQ {
    private String Question;
    private String Ans;
public FAQ(){

}
    public FAQ(String Question, String Ans) {
        this.Question = Question;
        this.Ans = Ans;
    }
    public String getQuestion() {
        return Question;
    }

    public void setQuestion(String Question){this.Question = Question;}
git
    public String getAns() {
        return Ans;
    }

     public void setAns(String Ans){
        this.Ans = Ans;
    }
}
