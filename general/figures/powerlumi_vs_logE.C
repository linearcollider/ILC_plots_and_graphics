void powerlumi_vs_logE()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Mar 30 11:53:05 2022) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "",0,45,1024,768);
   gStyle->SetOptStat(0);
   c1->Range(-1.575113,-1.111286,0.8967163,3.084869);
   c1->SetFillColor(10);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogx();
   c1->SetLogy();
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.17);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx41[4] = {
   0.0912,
   0.161,
   0.24,
   0.365};
   Double_t Graph0_fy41[4] = {
   0.6475,
   6.925,
   18.8,
   136.1538};
   TGraph *graph = new TGraph(4,Graph0_fx41,Graph0_fy41);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(5);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph041 = new TH1F("Graph_Graph041","",100,0.07,5);
   Graph_Graph041->SetMinimum(0.4);
   Graph_Graph041->SetMaximum(750);
   Graph_Graph041->SetDirectory(0);
   Graph_Graph041->SetStats(0);
   Graph_Graph041->SetLineWidth(2);
   Graph_Graph041->SetMarkerStyle(20);
   Graph_Graph041->SetMarkerSize(0.7);
   Graph_Graph041->GetXaxis()->SetTitle("Center-of-Mass Energy [TeV]");
   Graph_Graph041->GetXaxis()->SetRange(1,100);
   Graph_Graph041->GetXaxis()->SetNdivisions(506);
   Graph_Graph041->GetXaxis()->SetLabelFont(42);
   Graph_Graph041->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph041->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph041->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph041->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph041->GetXaxis()->SetTitleFont(42);
   Graph_Graph041->GetYaxis()->SetTitle("Power [MW] / Lumi [10^{34} s^{-1} cm^{-2}]");
   Graph_Graph041->GetYaxis()->SetNdivisions(506);
   Graph_Graph041->GetYaxis()->SetLabelFont(42);
   Graph_Graph041->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph041->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph041->GetYaxis()->SetTitleSize(0.055);
   Graph_Graph041->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph041->GetYaxis()->SetTitleFont(42);
   Graph_Graph041->GetZaxis()->SetLabelFont(42);
   Graph_Graph041->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph041->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph041->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph041->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph041->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph041);
   
   graph->Draw("alp");
   
   Double_t Graph1_fx42[4] = {
   0.0912,
   0.16,
   0.24,
   0.36};
   Double_t Graph1_fy42[4] = {
   2.608696,
   18.75,
   60,
   600};
   graph = new TGraph(4,Graph1_fx42,Graph1_fy42);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph142 = new TH1F("Graph_Graph142","Graph",100,0.06432,0.38688);
   Graph_Graph142->SetMinimum(2.347826);
   Graph_Graph142->SetMaximum(659.7391);
   Graph_Graph142->SetDirectory(0);
   Graph_Graph142->SetStats(0);
   Graph_Graph142->SetLineWidth(2);
   Graph_Graph142->SetMarkerStyle(20);
   Graph_Graph142->SetMarkerSize(0.7);
   Graph_Graph142->GetXaxis()->SetNdivisions(506);
   Graph_Graph142->GetXaxis()->SetLabelFont(42);
   Graph_Graph142->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph142->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph142->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph142->GetXaxis()->SetTitleOffset(1);
   Graph_Graph142->GetXaxis()->SetTitleFont(42);
   Graph_Graph142->GetYaxis()->SetNdivisions(506);
   Graph_Graph142->GetYaxis()->SetLabelFont(42);
   Graph_Graph142->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph142->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph142->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph142->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph142->GetYaxis()->SetTitleFont(42);
   Graph_Graph142->GetZaxis()->SetLabelFont(42);
   Graph_Graph142->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph142->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph142->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph142->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph142->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph142);
   
   graph->Draw("lp");
   
   Double_t Graph2_fx43[4] = {
   0.0912,
   0.16,
   0.24,
   0.36};
   Double_t Graph2_fy43[4] = {
   1.822917,
   13.15789,
   42.16867,
   437.5};
   graph = new TGraph(4,Graph2_fx43,Graph2_fy43);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph243 = new TH1F("Graph_Graph243","Graph",100,0.06432,0.38688);
   Graph_Graph243->SetMinimum(1.640625);
   Graph_Graph243->SetMaximum(481.0677);
   Graph_Graph243->SetDirectory(0);
   Graph_Graph243->SetStats(0);
   Graph_Graph243->SetLineWidth(2);
   Graph_Graph243->SetMarkerStyle(20);
   Graph_Graph243->SetMarkerSize(0.7);
   Graph_Graph243->GetXaxis()->SetNdivisions(506);
   Graph_Graph243->GetXaxis()->SetLabelFont(42);
   Graph_Graph243->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph243->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph243->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph243->GetXaxis()->SetTitleOffset(1);
   Graph_Graph243->GetXaxis()->SetTitleFont(42);
   Graph_Graph243->GetYaxis()->SetNdivisions(506);
   Graph_Graph243->GetYaxis()->SetLabelFont(42);
   Graph_Graph243->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph243->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph243->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph243->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph243->GetYaxis()->SetTitleFont(42);
   Graph_Graph243->GetZaxis()->SetLabelFont(42);
   Graph_Graph243->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph243->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph243->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph243->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph243->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph243);
   
   graph->Draw("lp");
   
   Double_t Graph3_fx44[4] = {
   0.0912,
   0.38,
   1.5,
   3};
   Double_t Graph3_fy44[4] = {
   277.7778,
   47.82609,
   98.37838,
   99.83051};
   graph = new TGraph(4,Graph3_fx44,Graph3_fy44);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph344 = new TH1F("Graph_Graph344","Graph",100,0.08208,3.29088);
   Graph_Graph344->SetMinimum(24.83092);
   Graph_Graph344->SetMaximum(300.7729);
   Graph_Graph344->SetDirectory(0);
   Graph_Graph344->SetStats(0);
   Graph_Graph344->SetLineWidth(2);
   Graph_Graph344->SetMarkerStyle(20);
   Graph_Graph344->SetMarkerSize(0.7);
   Graph_Graph344->GetXaxis()->SetNdivisions(506);
   Graph_Graph344->GetXaxis()->SetLabelFont(42);
   Graph_Graph344->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph344->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph344->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph344->GetXaxis()->SetTitleOffset(1);
   Graph_Graph344->GetXaxis()->SetTitleFont(42);
   Graph_Graph344->GetYaxis()->SetNdivisions(506);
   Graph_Graph344->GetYaxis()->SetLabelFont(42);
   Graph_Graph344->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph344->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph344->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph344->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph344->GetYaxis()->SetTitleFont(42);
   Graph_Graph344->GetZaxis()->SetLabelFont(42);
   Graph_Graph344->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph344->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph344->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph344->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph344->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph344);
   
   graph->Draw("lp");
   
   Double_t Graph4_fx45[4] = {
   0.0912,
   0.38,
   1.5,
   3};
   Double_t Graph4_fy45[4] = {
   277.7778,
   36.95652,
   98.37838,
   99.83051};
   graph = new TGraph(4,Graph4_fx45,Graph4_fy45);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph445 = new TH1F("Graph_Graph445","Graph",100,0.08208,3.29088);
   Graph_Graph445->SetMinimum(12.8744);
   Graph_Graph445->SetMaximum(301.8599);
   Graph_Graph445->SetDirectory(0);
   Graph_Graph445->SetStats(0);
   Graph_Graph445->SetLineWidth(2);
   Graph_Graph445->SetMarkerStyle(20);
   Graph_Graph445->SetMarkerSize(0.7);
   Graph_Graph445->GetXaxis()->SetNdivisions(506);
   Graph_Graph445->GetXaxis()->SetLabelFont(42);
   Graph_Graph445->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph445->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph445->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph445->GetXaxis()->SetTitleOffset(1);
   Graph_Graph445->GetXaxis()->SetTitleFont(42);
   Graph_Graph445->GetYaxis()->SetNdivisions(506);
   Graph_Graph445->GetYaxis()->SetLabelFont(42);
   Graph_Graph445->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph445->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph445->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph445->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph445->GetYaxis()->SetTitleFont(42);
   Graph_Graph445->GetZaxis()->SetLabelFont(42);
   Graph_Graph445->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph445->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph445->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph445->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph445->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph445);
   
   graph->Draw("lp");
   
   Double_t Graph5_fx46[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph5_fy46[4] = {
   447.619,
   82.22222,
   96.11111,
   83.33333};
   graph = new TGraph(4,Graph5_fx46,Graph5_fy46);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph546 = new TH1F("Graph_Graph546","Graph",100,0.00032,1.09088);
   Graph_Graph546->SetMinimum(45.68254);
   Graph_Graph546->SetMaximum(484.1587);
   Graph_Graph546->SetDirectory(0);
   Graph_Graph546->SetStats(0);
   Graph_Graph546->SetLineWidth(2);
   Graph_Graph546->SetMarkerStyle(20);
   Graph_Graph546->SetMarkerSize(0.7);
   Graph_Graph546->GetXaxis()->SetNdivisions(506);
   Graph_Graph546->GetXaxis()->SetLabelFont(42);
   Graph_Graph546->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph546->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph546->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph546->GetXaxis()->SetTitleOffset(1);
   Graph_Graph546->GetXaxis()->SetTitleFont(42);
   Graph_Graph546->GetYaxis()->SetNdivisions(506);
   Graph_Graph546->GetYaxis()->SetLabelFont(42);
   Graph_Graph546->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph546->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph546->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph546->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph546->GetYaxis()->SetTitleFont(42);
   Graph_Graph546->GetZaxis()->SetLabelFont(42);
   Graph_Graph546->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph546->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph546->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph546->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph546->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph546);
   
   graph->Draw("lp");
   
   Double_t Graph6_fx47[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph6_fy47[4] = {
   280.4878,
   51.11111,
   59.72222,
   58.82353};
   graph = new TGraph(4,Graph6_fx47,Graph6_fy47);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph647 = new TH1F("Graph_Graph647","Graph",100,0.00032,1.09088);
   Graph_Graph647->SetMinimum(28.17344);
   Graph_Graph647->SetMaximum(303.4255);
   Graph_Graph647->SetDirectory(0);
   Graph_Graph647->SetStats(0);
   Graph_Graph647->SetLineWidth(2);
   Graph_Graph647->SetMarkerStyle(20);
   Graph_Graph647->SetMarkerSize(0.7);
   Graph_Graph647->GetXaxis()->SetNdivisions(506);
   Graph_Graph647->GetXaxis()->SetLabelFont(42);
   Graph_Graph647->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph647->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph647->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph647->GetXaxis()->SetTitleOffset(1);
   Graph_Graph647->GetXaxis()->SetTitleFont(42);
   Graph_Graph647->GetYaxis()->SetNdivisions(506);
   Graph_Graph647->GetYaxis()->SetLabelFont(42);
   Graph_Graph647->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph647->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph647->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph647->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph647->GetYaxis()->SetTitleFont(42);
   Graph_Graph647->GetZaxis()->SetLabelFont(42);
   Graph_Graph647->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph647->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph647->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph647->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph647->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph647);
   
   graph->Draw("lp");
   
   Double_t Graph7_fx48[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph7_fy48[4] = {
   280.4878,
   36.66667,
   59.72222,
   58.82353};
   graph = new TGraph(4,Graph7_fx48,Graph7_fy48);
   graph->SetName("Graph7");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(3);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph748 = new TH1F("Graph_Graph748","Graph",100,0.00032,1.09088);
   Graph_Graph748->SetMinimum(12.28455);
   Graph_Graph748->SetMaximum(304.8699);
   Graph_Graph748->SetDirectory(0);
   Graph_Graph748->SetStats(0);
   Graph_Graph748->SetLineWidth(2);
   Graph_Graph748->SetMarkerStyle(20);
   Graph_Graph748->SetMarkerSize(0.7);
   Graph_Graph748->GetXaxis()->SetNdivisions(506);
   Graph_Graph748->GetXaxis()->SetLabelFont(42);
   Graph_Graph748->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph748->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph748->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph748->GetXaxis()->SetTitleOffset(1);
   Graph_Graph748->GetXaxis()->SetTitleFont(42);
   Graph_Graph748->GetYaxis()->SetNdivisions(506);
   Graph_Graph748->GetYaxis()->SetLabelFont(42);
   Graph_Graph748->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph748->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph748->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph748->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph748->GetYaxis()->SetTitleFont(42);
   Graph_Graph748->GetZaxis()->SetLabelFont(42);
   Graph_Graph748->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph748->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph748->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph748->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph748->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph748);
   
   graph->Draw("lp");
   
   TLegend *leg = new TLegend(0.426,0.235,0.867,0.535,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","AC Power / Lumi vs Energy of Future e^{+}e^{-} Colliders","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","FCCee, 2 IPs [arXiv:2203.08310] ","LP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","CEPC, 2 IPs [arXiv:2203.09451]","LP");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2","CEPC, 2 IPs, lumi up, power priv. com.]","LP");
   entry->SetLineColor(4);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph5","ILC baseline [arXiv:2203.07622]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph6","ILC luminosity upgrade [dito]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph7","ILC250 10 Hz operation [dito]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(3);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph3","CLIC baseline [arXiv:2203.09186]","LP");
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph4","CLIC luminosity upgrade [dito]","LP");
   entry->SetLineColor(8);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
