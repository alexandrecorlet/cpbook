# CP4 book: Given a date (in the past), determine the day of the week
# (Monday, ..., Sunday) on that day and the number of day(s) that has
# elapsed since that day until present.
# author: uncoded

from datetime import date


def main():
    year = int(input())
    month = int(input())
    day = int(input())

    dt = date(year, month, day)
    curr_dt = date.today()

    print(dt.strftime("%a"))
    print(f"{(curr_dt - dt).days} elapsed.")


if __name__ == "__main__":
    main()

