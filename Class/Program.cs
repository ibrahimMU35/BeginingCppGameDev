namespace Class;

class Wizard {
    public string name { get; set; }
    public string favoriteSpell { get; set; }
    public int spellSlot { get; set; }
    public float experience { get; set; }
    public void CastSpell(){
        System.Console.WriteLine(name + " casts " + favoriteSpell );
        spellSlot--;
    }
}
class Program
{
    static void Main(string[] args)
    {
        Wizard wizard01 = new Wizard();
        wizard01.name = "Parry Hopper";
        wizard01.favoriteSpell ="unexpecto";
        wizard01.spellSlot = 2;
        wizard01.experience=0.1f;
        System.Console.WriteLine(wizard01.spellSlot);
       wizard01.CastSpell();
        System.Console.WriteLine(wizard01.spellSlot);


        Console.ReadKey();
    }
}
