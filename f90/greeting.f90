implicit none
integer :: x
print *, "今は朝ですか、昼ですか？"
print *, "1 朝　2 昼"
read *, x
if (x == 1) then
    print *, "おはよう"
else if (x == 2) then
    print *, "こんにちは"
else
    print *, "こんばんは・・・かな？"
end if
end
