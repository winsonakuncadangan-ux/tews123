nilai = 80

match True:
    case _ if nilai >= 90:
        print("Nilai Kamu A")
    case _ if nilai >= 80:
        print("Nilai Kamu B")
    case _ if nilai >= 70:
        print("Nilai Kamu C")
    case _ :
        print("Nilai Kamu D")
