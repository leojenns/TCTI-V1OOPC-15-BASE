.PHONY: clean All

All:
	@echo "----------Building project:[ week3opdr3 -  ]----------"
	@cd "week3opdr3" && "$(MAKE)" -f  "week3opdr3.mk"
clean:
	@echo "----------Cleaning project:[ week3opdr3 -  ]----------"
	@cd "week3opdr3" && "$(MAKE)" -f  "week3opdr3.mk" clean
