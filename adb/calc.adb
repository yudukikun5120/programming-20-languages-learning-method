with Ada.Text_IO; use Ada.integer_Text_IO;
use Ada.Text_IO; use Ada.Integer_Text_IO;
procedure Calc is
    a : Integer;
begin
    Put_Line("好きな整数を入力してください");
    Get(a);
    Put_Line("その数の10倍は" & Integer'Image(a*10) & "です");
end Calc;
