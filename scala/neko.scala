class Neko {
  def naku(): Unit = {
    println("にゃあ")
  }
}

object PlayNeko {
  def main(args: Array[String]): Unit = {
    val tm = new Neko()
    tm.naku()
  }
}
