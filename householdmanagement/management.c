#include <stdio.h>
#include <string.h>

int main() {
  int total_budget, spent_amount = 0;
  char item[50];
  int cost;
  
  printf("Enter your household budget for the month: ");
  scanf("%d", &total_budget);
  printf("\n");
  while (1) {
    printf("Enter the name of an item (or type 'done' to finish): ");
    scanf("%s", item);
    
    if (strcmp(item, "done") == 0) {
      break;
    }
    
    printf("Enter the cost of %s: ", item);
    scanf("%d", &cost);
    
    spent_amount += cost;
    printf("Added %s to your expenses.\n\n", item);
  }
  
  printf("Expenses for the month:\n");
  printf("Total budget: %d\n", total_budget);
  printf("Amount spent: %d\n", spent_amount);
  printf("Amount remaining: %d\n", total_budget - spent_amount);
  
  if (spent_amount > total_budget) {
    printf("You have exceeded your budget by %d.\n", spent_amount - total_budget);
  } else {
    printf("You have %d left in your budget.\n", total_budget - spent_amount);
  }
  return 0;
  }
