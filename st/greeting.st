'今は朝ですか、昼ですか？' displayNl.
'1 朝 2 昼' displayNl.
s := stdin nextLine asInteger.
s = 1
ifTrue: [ 'おはよう' displayNl ]
ifFalse: [
    s = 2
    ifTrue: [ 'こんにちは' displayNl ]
    ifFalse: [ 'こんばんは・・・かな？' displayNl ] 
].
