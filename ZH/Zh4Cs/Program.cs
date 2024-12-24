using System.Text;

using FileStream fs = new("in.txt", FileMode.Open);
int max = GetNumbers(fs).Max();
File.WriteAllText("out.txt", max.ToString());
return;

IEnumerable<int> GetNumbers(Stream stream) =>
  GetWords(stream).Where(w => int.TryParse(w, out _)).Select(int.Parse);

IEnumerable<string> GetWords(Stream stream)
{
  StringBuilder sb = new();
  do
  {
    int b = stream.ReadByte();
    switch (b)
    {
      case -1:
        yield return sb.ToString();
        yield break;
      case ' ':
        yield return sb.ToString();
        sb.Clear();
        break;
      default:
        sb.Append((char)b);
        break;
    }
  }
  while (true);
}
