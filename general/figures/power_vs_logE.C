void power_vs_logE()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Mar 30 11:52:53 2022) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "",0,45,1024,768);
   gStyle->SetOptStat(0);
   c1->Range(-1.575113,-152.5641,0.8967163,744.8718);
   c1->SetFillColor(10);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogx();
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
   
   Double_t Graph0_fx25[4] = {
   0.0912,
   0.161,
   0.24,
   0.365};
   Double_t Graph0_fy25[4] = {
   259,
   277,
   282,
   354};
   TGraph *graph = new TGraph(4,Graph0_fx25,Graph0_fy25);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(5);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph025 = new TH1F("Graph_Graph025","",100,0.07,5);
   Graph_Graph025->SetMinimum(0);
   Graph_Graph025->SetMaximum(700);
   Graph_Graph025->SetDirectory(0);
   Graph_Graph025->SetStats(0);
   Graph_Graph025->SetLineWidth(2);
   Graph_Graph025->SetMarkerStyle(20);
   Graph_Graph025->SetMarkerSize(0.7);
   Graph_Graph025->GetXaxis()->SetTitle("Center-of-Mass Energy [TeV]");
   Graph_Graph025->GetXaxis()->SetRange(1,100);
   Graph_Graph025->GetXaxis()->SetNdivisions(506);
   Graph_Graph025->GetXaxis()->SetLabelFont(42);
   Graph_Graph025->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph025->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph025->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph025->GetXaxis()->SetTitleFont(42);
   Graph_Graph025->GetYaxis()->SetTitle("Total AC Power [MW]");
   Graph_Graph025->GetYaxis()->SetNdivisions(506);
   Graph_Graph025->GetYaxis()->SetLabelFont(42);
   Graph_Graph025->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph025->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph025->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph025->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph025->GetYaxis()->SetTitleFont(42);
   Graph_Graph025->GetZaxis()->SetLabelFont(42);
   Graph_Graph025->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph025->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph025->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph025->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph025->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph025);
   
   graph->Draw("alp");
   
   Double_t Graph1_fx26[4] = {
   0.0912,
   0.16,
   0.24,
   0.36};
   Double_t Graph1_fy26[4] = {
   300,
   300,
   300,
   300};
   graph = new TGraph(4,Graph1_fx26,Graph1_fy26);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph126 = new TH1F("Graph_Graph126","Graph",100,0.06432,0.38688);
   Graph_Graph126->SetMinimum(299.9);
   Graph_Graph126->SetMaximum(301.1);
   Graph_Graph126->SetDirectory(0);
   Graph_Graph126->SetStats(0);
   Graph_Graph126->SetLineWidth(2);
   Graph_Graph126->SetMarkerStyle(20);
   Graph_Graph126->SetMarkerSize(0.7);
   Graph_Graph126->GetXaxis()->SetNdivisions(506);
   Graph_Graph126->GetXaxis()->SetLabelFont(42);
   Graph_Graph126->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph126->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph126->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph126->GetXaxis()->SetTitleOffset(1);
   Graph_Graph126->GetXaxis()->SetTitleFont(42);
   Graph_Graph126->GetYaxis()->SetNdivisions(506);
   Graph_Graph126->GetYaxis()->SetLabelFont(42);
   Graph_Graph126->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph126->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph126->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph126->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph126->GetYaxis()->SetTitleFont(42);
   Graph_Graph126->GetZaxis()->SetLabelFont(42);
   Graph_Graph126->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph126->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph126->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph126->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph126->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph126);
   
   graph->Draw("lp");
   
   Double_t Graph2_fx27[4] = {
   0.0912,
   0.16,
   0.24,
   0.36};
   Double_t Graph2_fy27[4] = {
   350,
   350,
   350,
   350};
   graph = new TGraph(4,Graph2_fx27,Graph2_fy27);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph227 = new TH1F("Graph_Graph227","Graph",100,0.06432,0.38688);
   Graph_Graph227->SetMinimum(349.9);
   Graph_Graph227->SetMaximum(351.1);
   Graph_Graph227->SetDirectory(0);
   Graph_Graph227->SetStats(0);
   Graph_Graph227->SetLineWidth(2);
   Graph_Graph227->SetMarkerStyle(20);
   Graph_Graph227->SetMarkerSize(0.7);
   Graph_Graph227->GetXaxis()->SetNdivisions(506);
   Graph_Graph227->GetXaxis()->SetLabelFont(42);
   Graph_Graph227->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph227->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph227->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph227->GetXaxis()->SetTitleOffset(1);
   Graph_Graph227->GetXaxis()->SetTitleFont(42);
   Graph_Graph227->GetYaxis()->SetNdivisions(506);
   Graph_Graph227->GetYaxis()->SetLabelFont(42);
   Graph_Graph227->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph227->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph227->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph227->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph227->GetYaxis()->SetTitleFont(42);
   Graph_Graph227->GetZaxis()->SetLabelFont(42);
   Graph_Graph227->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph227->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph227->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph227->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph227->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph227);
   
   graph->Draw("lp");
   
   Double_t Graph3_fx28[4] = {
   0.0912,
   0.38,
   1.5,
   3};
   Double_t Graph3_fy28[4] = {
   100,
   110,
   364,
   589};
   graph = new TGraph(4,Graph3_fx28,Graph3_fy28);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph328 = new TH1F("Graph_Graph328","Graph",100,0.08208,3.29088);
   Graph_Graph328->SetMinimum(51.1);
   Graph_Graph328->SetMaximum(637.9);
   Graph_Graph328->SetDirectory(0);
   Graph_Graph328->SetStats(0);
   Graph_Graph328->SetLineWidth(2);
   Graph_Graph328->SetMarkerStyle(20);
   Graph_Graph328->SetMarkerSize(0.7);
   Graph_Graph328->GetXaxis()->SetNdivisions(506);
   Graph_Graph328->GetXaxis()->SetLabelFont(42);
   Graph_Graph328->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph328->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph328->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph328->GetXaxis()->SetTitleOffset(1);
   Graph_Graph328->GetXaxis()->SetTitleFont(42);
   Graph_Graph328->GetYaxis()->SetNdivisions(506);
   Graph_Graph328->GetYaxis()->SetLabelFont(42);
   Graph_Graph328->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph328->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph328->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph328->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph328->GetYaxis()->SetTitleFont(42);
   Graph_Graph328->GetZaxis()->SetLabelFont(42);
   Graph_Graph328->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph328->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph328->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph328->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph328->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph328);
   
   graph->Draw("lp");
   
   Double_t Graph4_fx29[4] = {
   0.0912,
   0.38,
   1.5,
   3};
   Double_t Graph4_fy29[4] = {
   100,
   170,
   364,
   589};
   graph = new TGraph(4,Graph4_fx29,Graph4_fy29);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph429 = new TH1F("Graph_Graph429","Graph",100,0.08208,3.29088);
   Graph_Graph429->SetMinimum(51.1);
   Graph_Graph429->SetMaximum(637.9);
   Graph_Graph429->SetDirectory(0);
   Graph_Graph429->SetStats(0);
   Graph_Graph429->SetLineWidth(2);
   Graph_Graph429->SetMarkerStyle(20);
   Graph_Graph429->SetMarkerSize(0.7);
   Graph_Graph429->GetXaxis()->SetNdivisions(506);
   Graph_Graph429->GetXaxis()->SetLabelFont(42);
   Graph_Graph429->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph429->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph429->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph429->GetXaxis()->SetTitleOffset(1);
   Graph_Graph429->GetXaxis()->SetTitleFont(42);
   Graph_Graph429->GetYaxis()->SetNdivisions(506);
   Graph_Graph429->GetYaxis()->SetLabelFont(42);
   Graph_Graph429->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph429->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph429->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph429->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph429->GetYaxis()->SetTitleFont(42);
   Graph_Graph429->GetZaxis()->SetLabelFont(42);
   Graph_Graph429->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph429->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph429->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph429->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph429->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph429);
   
   graph->Draw("lp");
   
   Double_t Graph5_fx30[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph5_fy30[4] = {
   94,
   111,
   173,
   300};
   graph = new TGraph(4,Graph5_fx30,Graph5_fy30);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph530 = new TH1F("Graph_Graph530","Graph",100,0.00032,1.09088);
   Graph_Graph530->SetMinimum(73.4);
   Graph_Graph530->SetMaximum(320.6);
   Graph_Graph530->SetDirectory(0);
   Graph_Graph530->SetStats(0);
   Graph_Graph530->SetLineWidth(2);
   Graph_Graph530->SetMarkerStyle(20);
   Graph_Graph530->SetMarkerSize(0.7);
   Graph_Graph530->GetXaxis()->SetNdivisions(506);
   Graph_Graph530->GetXaxis()->SetLabelFont(42);
   Graph_Graph530->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph530->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph530->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph530->GetXaxis()->SetTitleOffset(1);
   Graph_Graph530->GetXaxis()->SetTitleFont(42);
   Graph_Graph530->GetYaxis()->SetNdivisions(506);
   Graph_Graph530->GetYaxis()->SetLabelFont(42);
   Graph_Graph530->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph530->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph530->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph530->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph530->GetYaxis()->SetTitleFont(42);
   Graph_Graph530->GetZaxis()->SetLabelFont(42);
   Graph_Graph530->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph530->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph530->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph530->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph530->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph530);
   
   graph->Draw("lp");
   
   Double_t Graph6_fx31[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph6_fy31[4] = {
   115,
   138,
   215,
   300};
   graph = new TGraph(4,Graph6_fx31,Graph6_fy31);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph631 = new TH1F("Graph_Graph631","Graph",100,0.00032,1.09088);
   Graph_Graph631->SetMinimum(96.5);
   Graph_Graph631->SetMaximum(318.5);
   Graph_Graph631->SetDirectory(0);
   Graph_Graph631->SetStats(0);
   Graph_Graph631->SetLineWidth(2);
   Graph_Graph631->SetMarkerStyle(20);
   Graph_Graph631->SetMarkerSize(0.7);
   Graph_Graph631->GetXaxis()->SetNdivisions(506);
   Graph_Graph631->GetXaxis()->SetLabelFont(42);
   Graph_Graph631->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph631->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph631->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph631->GetXaxis()->SetTitleOffset(1);
   Graph_Graph631->GetXaxis()->SetTitleFont(42);
   Graph_Graph631->GetYaxis()->SetNdivisions(506);
   Graph_Graph631->GetYaxis()->SetLabelFont(42);
   Graph_Graph631->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph631->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph631->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph631->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph631->GetYaxis()->SetTitleFont(42);
   Graph_Graph631->GetZaxis()->SetLabelFont(42);
   Graph_Graph631->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph631->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph631->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph631->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph631->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph631);
   
   graph->Draw("lp");
   
   Double_t Graph7_fx32[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph7_fy32[4] = {
   115,
   198,
   215,
   300};
   graph = new TGraph(4,Graph7_fx32,Graph7_fy32);
   graph->SetName("Graph7");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(3);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph732 = new TH1F("Graph_Graph732","Graph",100,0.00032,1.09088);
   Graph_Graph732->SetMinimum(96.5);
   Graph_Graph732->SetMaximum(318.5);
   Graph_Graph732->SetDirectory(0);
   Graph_Graph732->SetStats(0);
   Graph_Graph732->SetLineWidth(2);
   Graph_Graph732->SetMarkerStyle(20);
   Graph_Graph732->SetMarkerSize(0.7);
   Graph_Graph732->GetXaxis()->SetNdivisions(506);
   Graph_Graph732->GetXaxis()->SetLabelFont(42);
   Graph_Graph732->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph732->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph732->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph732->GetXaxis()->SetTitleOffset(1);
   Graph_Graph732->GetXaxis()->SetTitleFont(42);
   Graph_Graph732->GetYaxis()->SetNdivisions(506);
   Graph_Graph732->GetYaxis()->SetLabelFont(42);
   Graph_Graph732->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph732->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph732->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph732->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph732->GetYaxis()->SetTitleFont(42);
   Graph_Graph732->GetZaxis()->SetLabelFont(42);
   Graph_Graph732->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph732->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph732->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph732->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph732->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph732);
   
   graph->Draw("lp");
   
   TLegend *leg = new TLegend(0.21,0.65,0.61,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","AC Power vs Energy of Future e^{+}e^{-} Colliders","h");
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
