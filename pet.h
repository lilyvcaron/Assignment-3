class Pet
{
  private:
    int age;
    string type; //cat or dog
    double weight;

  public:
    Pet(int age, string type, double weight);

    //whole mutator
    void setPet(int age, string type, double weight);

    //individual mutators
    void setAge(int newAge)
    {
      age = newAge;
    }

    void setType(string newType)
    {
      type = newType;
    }

    void setWeight(double newWeight)
    {
      weight = newWeight;
    }

    //accessors
    int getAge()
    {
      return age;
    }

    string getType()
    {
      return type;
    }

    double getWeight()
    {
      return weight;
    }
}
