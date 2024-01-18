10 RANDOMIZE
20 LET x = IP(RND*10) + 1
30 PRINT "数当てゲーム（1 〜 10）"
40 FOR i = 0 TO 4
50    PRINT "数をあててください"
60    INPUT a
70    IF x = a THEN
80        PRINT "正解"
90        EXIT FOR
100   ELSEIF a = x - 1 OR a = x + 1 THEN
110       PRINT "おしい"
120   ELSE
130       PRINT "はずれ"
140   END IF
150 NEXT i
160 IF x <> a THEN
170    PRINT "残念、時間切れ"
180    PRINT "またね！"
190 END IF
200 END

