#include <stdio.h>
#include <stdlib.h>
#include "sp_params.h"

void init_params(parameters** params)
{
	*params = (parameters*) malloc(sizeof(parameters));
	(*params)->port = NULL;
	(*params)->app_mode = NULL;
	(*params)->vcf_dir = NULL;
	(*params)->snp_ids = NULL;
	(*params)->num_files = 0;
	(*params)->chunk_size = 500000;
}

void print_params(parameters* params)
{
	fprintf(stderr, "%-30s%s\n","PORT:", params->port);
	fprintf(stderr, "%-30s%s\n","APP_MODE:", params->app_mode);
	fprintf(stderr, "%-30s%s\n","VCF_DIR:", params->vcf_dir);
	fprintf(stderr, "%-30s%s\n","SNP_IDS:", params->snp_ids);
	fprintf(stderr, "%-30s%u\n","NUM_FILES:", params->num_files);
	fprintf(stderr, "%-30s%u\n","CHUNK_SIZE:", params->chunk_size);
}
