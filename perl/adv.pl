@place = ();
push(@place, {name => "町", left => 1, right => 2});
push(@place, {name => "海", left => 0, right => 3});
push(@place, {name => "山", left => 1, right => 0});

$pos = 0;
print "さあ、冒険だ！！！\n";
for(1 .. 5) {
    print "\nここは", $place[$pos]->{name}, "です。\n";
    print "どちらに行きますか？";
    print "1 左　2 右\n";
    $ans = <STDIN>;
    if ($ans == 1) {
        $pos = $place[$pos]->{left};
    }
    elsif ($ans == 2) {
        $pos = $place[$pos]->{right};
    }
    if($pos == @place) {
        print "ゴール！！！\n";
        last;
    }
}

if($pos != @place) {
    print "\n残念！時間切れです\n";
}
