program greeting(output, input);
var a : integer;
begin
    writeln('今は朝ですか、昼ですか？');
    writeln('1 朝　2 昼');
    readln(a);
    if a = 1 then writeln('おはよう')
    else if a = 2 then writeln('こんにちは')
    else writeln('こんばんは・・・かな？');
end.
```
