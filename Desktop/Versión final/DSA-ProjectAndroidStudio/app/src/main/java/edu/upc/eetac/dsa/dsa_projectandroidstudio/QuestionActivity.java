package edu.upc.eetac.dsa.dsa_projectandroidstudio;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import retrofit2.Call;
import retrofit2.Callback;
import retrofit2.Response;

public class QuestionActivity extends AppCompatActivity {

    ApiServices services;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_question);

        services = ApiRetrofit.getApiService().create(ApiServices.class);

        EditText dateText = (EditText) findViewById(R.id.dateText);
        EditText titleText = (EditText) findViewById(R.id.titleText);
        EditText messageText = (EditText) findViewById(R.id.messageText);
        EditText senderText = (EditText) findViewById(R.id.senderText);

        Button initiateBtn = (Button) findViewById(R.id.initiateBtn);
        initiateBtn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                String date = dateText.getText().toString();
                String title = titleText.getText().toString();
                String message = messageText.getText().toString();
                String sender = senderText.getText().toString();

                Question q = new Question(date, title, message, sender);
                Call<Question> call = services.askQuestion(q);

                call.enqueue(new Callback<Question>() {
                    @Override
                    public void onResponse(Call<Question> call, Response<Question> response) {
                        Log.i("Question asked",":: " + q.toString());
                        if (response.isSuccessful()) {
                            Question question = response.body();
                            Toast.makeText(getApplicationContext(),"SUCCESS : Question sent", Toast.LENGTH_SHORT).show();
                            Log.i("SUCCESS","Question sent: " + question.toString());
                            Intent intent = new Intent(getApplicationContext(), QuestionActivity.class);
                            startActivity(intent);
                        } else {
                            Toast.makeText(getApplicationContext(),"ERROR : Bad question", Toast.LENGTH_SHORT).show();
                            Log.e("ERROR","Error in question");
                            Intent intent = new Intent(getApplicationContext(), QuestionActivity.class);
                            startActivity(intent);
                        }
                    }

                    @Override
                    public void onFailure(Call<Question> call, Throwable t) {
                        Toast.makeText(getApplicationContext(),"ERROR : No connection", Toast.LENGTH_SHORT).show();
                        Log.e("ERROR","Failed to establish connection");
                        Intent intent = new Intent(getApplicationContext(), QuestionActivity.class);
                        startActivity(intent);
                    }
                });
            }
        });
    }
}