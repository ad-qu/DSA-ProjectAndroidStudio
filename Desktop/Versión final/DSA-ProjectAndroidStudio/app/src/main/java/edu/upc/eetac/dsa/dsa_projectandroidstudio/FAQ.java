package edu.upc.eetac.dsa.dsa_projectandroidstudio;

public class FAQ {
    private String question;
    private String ans;

    public FAQ(){
    }
    public FAQ(String Question, String Ans) {
        this.question = Question;
        this.ans = Ans;
    }
    public String getQuestion() {
        return question;
    }

    public void setQuestion(String Question){this.question = Question;}

    public String getAns() {
        return ans;
    }

    public void setAns(String Ans){
        this.ans = Ans;
    }
}