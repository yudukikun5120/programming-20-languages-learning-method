open(IN, "eng.txt");
@x = <IN>;
close(IN);
@y = sort(@x);
print @y;
