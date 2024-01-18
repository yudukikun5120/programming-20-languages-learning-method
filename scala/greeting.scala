object Greeting {
  def main(args: Array[String]): Unit = {
    println("今は朝ですか、昼ですか？")
    print("1 朝 2 昼 > ")
    val num = scala.io.StdIn.readInt()
    if (num == 1) println("おはようございます")
    else if (num == 2) println("こんにちは")
    else println("こんばんは・・・かな？")
  }
}
