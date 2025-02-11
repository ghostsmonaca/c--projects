namespace N{
    class date {      
    public:
        date(string);
        void print_date();
        ~date(){}

    private:
        int m_dag, m_maand, m_jaar, *m_data; //member variables
  };
}

