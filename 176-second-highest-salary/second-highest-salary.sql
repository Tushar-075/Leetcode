-- Write your PostgreSQL query statement below
        /*
        #########################################################################
        #                                                                       #
        #  =============================================                        #
        #                  SIDDARDHA CHILUVERU                                  #
        #  =============================================                        #
        #                                                                       #
        #  Author      : Siddardha Chiluveru                                    #
        #  Description : Solution / Code / Project                              #
        #  Date        : 2026-07-30                                             #
        #                                                                       #
        #########################################################################
        */
select max(salary) as secondhighestsalary from employee where salary < (select max(salary) from employee);