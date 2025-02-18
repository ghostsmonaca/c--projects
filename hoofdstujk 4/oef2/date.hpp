#include <string>

namespace N{
    class date {      
    public:
        date(const std::string& date_string);
        void print_date();
        ~date(){}

        int get_dag() const{return m_dag;}
        int get_maand() const {return m_maand;}
        int get_jaar() const {return m_jaar;}

        void set_dag(int dag) {m_dag = dag;}
        void set_maand(int maand) {m_maand = maand;}
        void set_jaar(int jaar) {m_jaar = jaar;}


    private:
        int m_dag, m_maand, m_jaar, *m_data; //member variables
  };
}

